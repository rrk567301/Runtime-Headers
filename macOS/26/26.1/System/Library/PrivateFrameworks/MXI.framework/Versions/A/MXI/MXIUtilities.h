@interface MXIUtilities : NSObject

+ (BOOL)parseBool:(id)a0 defaultValue:(BOOL)a1;
+ (float)parseFloat:(id)a0 defaultValue:(float)a1;
+ (int)parseInt:(id)a0 defaultValue:(int)a1;
+ (id)parseString:(id)a0 defaultValue:(id)a1;
+ (unsigned int)parseUInt:(id)a0 defaultValue:(unsigned int)a1;

@end
