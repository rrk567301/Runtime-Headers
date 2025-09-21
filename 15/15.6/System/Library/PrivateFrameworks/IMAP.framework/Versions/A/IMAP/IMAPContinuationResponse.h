@interface IMAPContinuationResponse : IMAPBasicResponse

- (const char *)_responseName;
- (char)isUntagged;

@end
