@class NSString;

@interface FSTaskOption : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char hasValue;
@property (readonly, retain) NSString *option;
@property (readonly, retain) NSString *optionValue;

+ (id)option:(id)a0 value:(id)a1;
+ (id)optionWithoutValue:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOption:(id)a0;
- (id)initWithOption:(id)a0 value:(id)a1;
- (id)initWithOption:(id)a0 value:(id)a1 hasValue:(char)a2;
- (id)originalArgv;

@end
