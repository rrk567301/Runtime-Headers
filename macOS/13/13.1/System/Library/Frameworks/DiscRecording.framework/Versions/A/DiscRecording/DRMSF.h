@interface DRMSF : NSNumber {
    long long _value;
}

+ (void)initialize;
+ (id)msf;
+ (id)msfWithFrames:(unsigned int)a0;
+ (id)msfWithString:(id)a0;
+ (id)msfFromString:(id)a0 couldBeByteLength:(BOOL)a1;

- (id)description;
- (id)init;
- (const char *)objCType;
- (unsigned long long)unsignedLongValue;
- (void)getValue:(void *)a0;
- (id)initWithString:(id)a0;
- (unsigned int)minutes;
- (unsigned int)seconds;
- (id)initWithFrames:(unsigned int)a0;
- (unsigned int)frames;
- (id)descriptionWithFormat:(id)a0;
- (unsigned int)sectors;
- (id)msfByAdding:(id)a0;
- (id)msfBySubtracting:(id)a0;
- (BOOL)isEqualToMSF:(id)a0;

@end
