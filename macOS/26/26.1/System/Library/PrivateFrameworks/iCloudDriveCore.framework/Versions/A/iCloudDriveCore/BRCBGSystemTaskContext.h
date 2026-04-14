@interface BRCBGSystemTaskContext : NSObject {
    unsigned long long _referenceCounter;
}

@property (nonatomic) unsigned long long options;

- (id)initWithOptions:(unsigned long long)a0;
- (void)addReference;
- (unsigned long long)releaseReference;

@end
