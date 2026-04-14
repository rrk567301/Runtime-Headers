@class NSMutableDictionary;

@interface PBSlideState : NSObject {
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (void)addBuild:(id)a0 order:(unsigned int)a1;
- (unsigned int)generateGroupId;
- (id)buildOrderMap;

@end
