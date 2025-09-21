@class NSString, GEOPDResultRefinementMetadata;

@interface GEOResultRefinementTime : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) GEOPDResultRefinementMetadata *metadata;
@property (readonly, nonatomic) char isSelected;
@property (readonly, nonatomic) char isNextDay;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementTime;
- (id)initWithDisplayName:(id)a0 timeStamp:(double)a1 metadata:(id)a2 isSelected:(char)a3 isNextDay:(char)a4;
- (id)initWithResultRefinementTime:(id)a0;

@end
