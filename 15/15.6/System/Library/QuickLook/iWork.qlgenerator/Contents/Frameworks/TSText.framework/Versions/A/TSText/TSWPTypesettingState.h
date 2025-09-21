@class NSDictionary;

@interface TSWPTypesettingState : NSObject

@property (nonatomic) double startPos;
@property (nonatomic) double endPos;
@property (nonatomic) unsigned int hyphenationChar;
@property (retain, nonatomic) NSDictionary *hyphenationAttr;
@property (nonatomic) char oikomiSquish;

- (void).cxx_destruct;
- (void)clear;

@end
