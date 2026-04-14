@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying> {
    int _eventType;
    unsigned long long _sessionID;
    NSString *_respondingPOP;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
