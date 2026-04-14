@class NSString;

@interface SCRIndentationContext : NSObject

@property (readonly, nonatomic) NSString *previousLine;
@property (readonly, nonatomic) NSString *currentLineWithIndentation;
@property (readonly, nonatomic) NSString *nextLine;

- (void).cxx_destruct;
- (id)initWithCurrentPosition:(unsigned long long)a0 inString:(id)a1;

@end
