@interface VCWRMHandler : NSObject {
    double _lastConnectionUnstableTime;
    double _WRMNotificationRequestTime;
}

@property (readonly) int localWRMLinkTypeSuggestion;
@property (readonly) int remoteWRMLinkTypeSuggestion;
@property (readonly) char isRemoteDuplicating;
@property double localLinkTypeSuggestionChangeTime;

- (id)init;
- (unsigned char)processRemoteWRMSuggestion:(int)a0 isRemoteDuplicating:(char)a1;

@end
