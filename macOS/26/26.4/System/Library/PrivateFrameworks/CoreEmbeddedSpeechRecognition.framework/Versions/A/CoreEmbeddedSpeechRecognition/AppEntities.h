@class LimitAllocation, EntityLimits, NSArray;

@interface AppEntities : NSObject {
    void /* function */ deniedApps;
    void /* unknown type, empty encoding */ entityMappings;
}

@property (nonatomic, readonly) BOOL enableEntityExtraction;
@property (nonatomic, readonly) LimitAllocation *limitAllocation;
@property (nonatomic, readonly) EntityLimits *entityLimits;
@property (nonatomic, readonly) NSArray *deniedApps;

- (void).cxx_destruct;

@end
