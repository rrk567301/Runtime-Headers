@interface DRMSF : NSNumber {
    long long _value;
}

+ (void)initialize;
+ (id)msf;
+ (id)msfFromString:(id)a0 couldBeByteLength:(BOOL)a1;
+ (id)msfWithFrames:(unsigned int)a0;
+ (id)msfWithString:(id)a0;

- (unsigned int)frames;
- (const char *)objCType;
- (void)getValue:(void *)a0;
- (id)init;
- (id)description;
- (id)initWithString:(id)a0;
- (id)initWithFrames:(unsigned int)a0;
- (unsigned long long)unsignedLongValue;
- (unsigned int)minutes;
- (unsigned int)seconds;
- (unsigned int)sectors;
- (id)descriptionWithFormat:(id)a0;
- (BOOL)isEqualToMSF:(id)a0;
- (id)msfByAdding:(id)a0;
- (id)msfBySubtracting:(id)a0;

@end
