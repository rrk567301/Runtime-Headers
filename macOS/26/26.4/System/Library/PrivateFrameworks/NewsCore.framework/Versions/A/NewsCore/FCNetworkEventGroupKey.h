@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying> {
    int _eventType;
    unsigned long long _sessionID;
    NSString *_respondingPOP;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
