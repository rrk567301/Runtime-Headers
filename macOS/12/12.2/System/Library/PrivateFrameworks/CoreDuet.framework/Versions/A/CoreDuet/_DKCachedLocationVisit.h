@class NSString;

@interface _DKCachedLocationVisit : NSObject {
    double _entryTime;
    double _exitTime;
    NSString *_locationId;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
