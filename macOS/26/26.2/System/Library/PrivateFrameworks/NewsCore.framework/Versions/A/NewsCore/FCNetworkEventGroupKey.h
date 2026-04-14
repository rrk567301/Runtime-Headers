@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying> {
    int _eventType;
    unsigned long long _sessionID;
    NSString *_respondingPOP;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
