/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPIncomingPhoneCallController.h"

@class TPBottomSingleButtonBar, TPButton, TPCallWaitingButton;

@interface MPPhoneCallWaitingController : MPIncomingPhoneCallController
{
    TPCallWaitingButton *_ignoreButton;
    TPCallWaitingButton *_answerButton;
    TPButton *_answerAndReleaseButton;
    TPBottomSingleButtonBar *_animatingBottomBar;
    unsigned int _didRelease:1;
    unsigned int _didHeldRelease:1;
    unsigned int _setupForThree:1;
}

- (id)additionalURLParameter;
- (void)dealloc;
- (void)answerCall:(struct __CTCall *)arg1;
- (BOOL)handleLockButtonPressed;
- (void)answerAndRelease:(id)arg1;
- (void)endAllCalls:(id)arg1;
- (void)requestDeactivation;
- (void)ignore;
- (void)updateImageFromPerson:(void *)arg1;
- (void)viewDidLoad;
- (id)_newBottomButtonBar;
- (id)newBottomBar;
- (void)getFrameForTopButton:(struct CGRect *)arg1 bottomButton:(struct CGRect *)arg2;
- (id)_getButtonFromBar:(id)arg1;
- (void)_addCallWaitingButtons:(BOOL)arg1;
- (void)_callCountChanged:(id)arg1;
- (void)_tearDown;
- (void)_callWaitingControlsFaded;
- (void)lockBarUnlocked:(id)arg1;
- (void)_bottomBarSwitchHalfDone;
- (void)_bottomBarSwitchDone;

@end

