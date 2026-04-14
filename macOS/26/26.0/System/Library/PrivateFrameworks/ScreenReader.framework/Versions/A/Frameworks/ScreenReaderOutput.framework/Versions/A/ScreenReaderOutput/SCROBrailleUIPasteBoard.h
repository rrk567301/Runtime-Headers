@class NSString;

@interface SCROBrailleUIPasteBoard : NSObject

@property (retain, nonatomic) NSString *textRepresentation;
@property (retain, nonatomic) NSString *brailleRepresentation;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *braille;

+ (id)sharedBoard;

- (void)reset;
- (void).cxx_destruct;
- (void)writeText:(id)a0;
- (void)writeBraille:(id)a0;
- (void)writeText:(id)a0 withBraille:(id)a1;

@end
