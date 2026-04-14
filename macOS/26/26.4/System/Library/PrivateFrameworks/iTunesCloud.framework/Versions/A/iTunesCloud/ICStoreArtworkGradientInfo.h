@class NSString, NSNumber, NSDictionary;

@interface ICStoreArtworkGradientInfo : NSObject

@property (nonatomic) double y1;
@property (nonatomic) double y2;
@property (nonatomic) struct CGColor { } *color;
@property (retain, nonatomic) NSString *colorStr;
@property (retain, nonatomic) NSNumber *y1Val;
@property (retain, nonatomic) NSNumber *y2Val;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;

@end
