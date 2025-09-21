@class NSArray, NSDictionary, NSData, NSString;

@interface FCLocalAreasMapping : NSObject <FCLocalAreasProvider, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *regionMap;
@property (retain, nonatomic) NSArray *areas;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)tagIDsForLocation:(id)a0 searchOption:(unsigned long long)a1;
- (id)areasForLocation:(id)a0;
- (id)autoFavoriteTagIDsForLocation:(id)a0;
- (id)autoFavoriteTagIDsForLocation:(id)a0 searchOption:(unsigned long long)a1;
- (id)filterOuterRegions:(id)a0;
- (id)regionsForLocation:(id)a0;

@end
