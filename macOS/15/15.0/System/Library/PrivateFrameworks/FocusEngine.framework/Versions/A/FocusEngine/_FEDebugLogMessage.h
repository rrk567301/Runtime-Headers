@class NSString;

@interface _FEDebugLogMessage : NSObject {
    NSString *_string;
}

+ (id)messageWithFormat:(id)a0;
+ (id)messageWithNewline;
+ (id)messageWithString:(id)a0;
+ (id)messageWithStyle:(unsigned long long)a0 string:(id)a1;
+ (id)messageWithPrefix:(id)a0 string:(id)a1;

- (id)description;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)_stringRepresentation;
- (BOOL)_isTransparent;
- (BOOL)_isNode;

@end
