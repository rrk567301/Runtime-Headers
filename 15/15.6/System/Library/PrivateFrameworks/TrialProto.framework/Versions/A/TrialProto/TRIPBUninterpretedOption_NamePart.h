@class NSString;

@interface TRIPBUninterpretedOption_NamePart : TRIPBMessage

@property (copy, nonatomic) NSString *namePart;
@property (nonatomic) char hasNamePart;
@property (nonatomic) char isExtension;
@property (nonatomic) char hasIsExtension;

+ (id)descriptor;

@end
