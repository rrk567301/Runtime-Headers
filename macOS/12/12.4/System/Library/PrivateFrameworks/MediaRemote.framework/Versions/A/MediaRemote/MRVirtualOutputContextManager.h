@class NSArray, NSMutableDictionary;

@interface MRVirtualOutputContextManager : NSObject {
    NSMutableDictionary *_ouputContextMap;
}

@property (readonly, nonatomic) NSArray *outputContext;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)fetchForUID:(id)a0;
- (void)addOutputContext:(id)a0;
- (void)removeOutputContext:(id)a0;

@end
