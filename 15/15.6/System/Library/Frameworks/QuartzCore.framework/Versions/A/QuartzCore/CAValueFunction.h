@class NSString;

@interface CAValueFunction : NSObject <NSSecureCoding> {
    NSString *_string;
    void *_impl;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *name;

+ (id)functionWithName:(id)a0;
+ (void)CAMLParserStartElement:(id)a0;

- (void)dealloc;
- (id)_initWithName:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (char)apply:(const double *)a0 result:(double *)a1;
- (char)apply:(const double *)a0 result:(double *)a1 parameterFunction:(void /* function */ *)a2 context:(void *)a3;
- (void)encodeWithCAMLWriter:(id)a0;
- (unsigned long long)inputCount;
- (unsigned long long)outputCount;

@end
