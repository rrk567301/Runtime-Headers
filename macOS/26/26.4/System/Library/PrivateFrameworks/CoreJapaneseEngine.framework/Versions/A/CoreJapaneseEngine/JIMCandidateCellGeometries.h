@class NSDictionary, NSFont;

@interface JIMCandidateCellGeometries : NSObject

@property (retain, nonatomic) NSFont *baseFont;
@property (readonly, nonatomic) double itemMargin;
@property (readonly, nonatomic) double subTextMargin;
@property (readonly, nonatomic) double yomiTextMargin;
@property (readonly, nonatomic) NSDictionary *mainTextAttributes;
@property (readonly, nonatomic) NSDictionary *mainEmojiTextAttributes;
@property (readonly, nonatomic) NSDictionary *subTextAttributes;
@property (readonly, nonatomic) NSDictionary *annotationTextAttributes;

+ (id)sharedGeometries;

- (void).cxx_destruct;
- (id)init;

@end
