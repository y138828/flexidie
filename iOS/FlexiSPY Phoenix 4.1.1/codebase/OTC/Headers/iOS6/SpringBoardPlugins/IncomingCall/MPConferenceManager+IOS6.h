/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "CNFSoundPlayerDelegateProtocol-Protocol.h"

@class CNFAudioPlayer, CNFConferenceController;
@protocol SBUIUserAgent;

//@interface MPConferenceManager : NSObject //<CNFSoundPlayerDelegateProtocol>
//{
//    CNFConferenceController *_conferenceController;
//    unsigned int _chatState;
//    id <SBUIUserAgent> _sbUserAgent;
//    CNFAudioPlayer *_player;
//}
@interface MPConferenceManager (IOS6)
+ (id)sharedInstance;
@property(readonly) unsigned int chatState; // @synthesize chatState=_chatState;
- (void)stopAudioPlayer;
- (void)audioPlayerDidStopPlaying:(id)arg1;
- (void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(float)arg3;
- (void)_faceTimeStateChanged:(id)arg1;
- (void)_faceTimeCapabilityChanged:(id)arg1;
- (void)_handleInvitation:(id)arg1;
- (void)endFaceTime;
- (BOOL)inFaceTime;
- (BOOL)faceTimeInvitationExists;
@property(readonly) CNFConferenceController *conferenceController;
- (void)dealloc;
- (id)init;

@end
