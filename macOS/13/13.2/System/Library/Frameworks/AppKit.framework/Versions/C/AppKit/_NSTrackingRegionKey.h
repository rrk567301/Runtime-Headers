@interface _NSTrackingRegionKey : NSObject {
    long long _trackingID;
    unsigned int _windowID;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTrackingID:(long long)a0 windowID:(unsigned int)a1;

@end
