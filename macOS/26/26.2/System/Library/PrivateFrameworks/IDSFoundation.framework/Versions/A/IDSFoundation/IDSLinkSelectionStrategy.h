@class NSString;

@interface IDSLinkSelectionStrategy : NSObject {
    void /* unknown type, empty encoding */ strategy;
}

@property (class, nonatomic, readonly) IDSLinkSelectionStrategy *defaultStrategy;

@property (nonatomic, readonly) BOOL wrapsPacketsWithQualityMetadata;
@property (nonatomic, readonly) NSString *description;

+ (id)adaptiveWithAllowedOverheadPerPacket:(long long)a0 allowedPacketsPerSecond:(double)a1;
+ (id)createWithJSON:(id)a0 error:(id *)a1;

- (id)init;
- (id)jsonWithError:(id *)a0;

@end
