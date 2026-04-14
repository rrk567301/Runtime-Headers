@class NSString, NSArray, NSAttributedString;

@interface SPTextInput : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *tokenIDs;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) unsigned long long type;

- (id)initWithAttributedString:(id)a0;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)tokenLength;
- (id)initWithTokenIds:(id)a0;

@end
