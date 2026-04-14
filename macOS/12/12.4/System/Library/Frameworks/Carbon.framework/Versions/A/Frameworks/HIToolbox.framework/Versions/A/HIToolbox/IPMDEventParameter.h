@class NSData;

@interface IPMDEventParameter : NSObject <NSSecureCoding> {
    NSData *eventObject;
    unsigned int eventType;
    unsigned int eventSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (BOOL)isPIDNative;
+ (id)eventParameterWithData:(const void *)a0 type:(unsigned int)a1 size:(unsigned int)a2;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (unsigned int)eventType;
- (id)initWithData:(const void *)a0 type:(unsigned int)a1 size:(unsigned int)a2;
- (id)dataObject;
- (id)initWithNSData:(id)a0 type:(unsigned int)a1 size:(unsigned int)a2;
- (id)initWithNSValue:(id)a0 type:(unsigned int)a1 size:(unsigned int)a2;
- (id)initWithObject:(id)a0 type:(unsigned int)a1 size:(unsigned int)a2;
- (unsigned int)eventSize;
- (const void *)dataPtr;
- (void)addObjectToArray:(id)a0;

@end
