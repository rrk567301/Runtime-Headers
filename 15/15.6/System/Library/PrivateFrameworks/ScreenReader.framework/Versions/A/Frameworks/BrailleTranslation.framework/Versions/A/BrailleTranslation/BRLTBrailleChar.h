@class NSString;

@interface BRLTBrailleChar : NSObject <NSCopying> {
    unsigned char _bits;
}

@property char dot1;
@property char dot2;
@property char dot3;
@property char dot4;
@property char dot5;
@property char dot6;
@property char dot7;
@property char dot8;
@property (readonly) NSString *unicode;
@property (readonly) unsigned char bits;

+ (id)charWithBits:(unsigned char)a0;
+ (id)charWithBrf:(id)a0;
+ (id)charWithUnichar:(unsigned short)a0;
+ (id)charWithUnicode:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)_dotUp:(int)a0;
- (void)_setDot:(int)a0 up:(char)a1;
- (id)initWithBits:(unsigned char)a0;
- (id)initWithBrf:(id)a0;
- (id)initWithUnichar:(unsigned short)a0;
- (id)initWithUnicode:(id)a0;
- (char)isEqualToBrailleChar:(id)a0;

@end
