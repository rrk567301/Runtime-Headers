@class NSUUID;

@interface SILogicalTimestampInternal : NSObject {
    void /* unknown type, empty encoding */ clockIdentifier;
}

@property (nonatomic, readonly) NSUUID *clockIdentifier;
@property (nonatomic, readonly) unsigned long long nanosecondsSinceBoot;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithClockIdentifier:(id)a0 nanosecondsSinceBoot:(unsigned long long)a1;

@end
