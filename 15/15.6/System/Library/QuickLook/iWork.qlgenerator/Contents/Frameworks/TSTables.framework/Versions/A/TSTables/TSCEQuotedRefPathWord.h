@class NSString;

@interface TSCEQuotedRefPathWord : NSObject

@property (nonatomic) char wasQuoted;
@property (nonatomic) char hasPreserveFlag;
@property (retain, nonatomic) NSString *rawString;

- (id)description;
- (void).cxx_destruct;
- (id)trimmedString;
- (id)initWithRawString:(id)a0;
- (id)quoteStringIfNeeded;
- (id)trimmedStringWithPreserveFlag:(char)a0;

@end
