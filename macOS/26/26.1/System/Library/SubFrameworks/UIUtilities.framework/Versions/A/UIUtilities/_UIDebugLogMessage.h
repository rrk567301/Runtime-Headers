@class NSString;

@interface _UIDebugLogMessage : NSObject {
    NSString *_string;
}

+ (id)messageWithFormat:(id)a0;
+ (id)messageWithPrefix:(id)a0 string:(id)a1;
+ (id)messageWithString:(id)a0;
+ (id)messageWithStyle:(unsigned long long)a0 string:(id)a1;
+ (id)messageWithNewline;

- (id)initWithString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_isTransparent;
- (id)_stringRepresentation;
- (BOOL)_isNode;

@end
