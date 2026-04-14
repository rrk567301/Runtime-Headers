@class NSString;

@interface _UIDebugLogMessage : NSObject {
    NSString *_string;
}

+ (id)messageWithFormat:(id)a0;
+ (id)messageWithPrefix:(id)a0 string:(id)a1;
+ (id)messageWithString:(id)a0;
+ (id)messageWithStyle:(unsigned long long)a0 string:(id)a1;
+ (id)messageWithNewline;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)_isTransparent;
- (id)_stringRepresentation;
- (BOOL)_isNode;

@end
