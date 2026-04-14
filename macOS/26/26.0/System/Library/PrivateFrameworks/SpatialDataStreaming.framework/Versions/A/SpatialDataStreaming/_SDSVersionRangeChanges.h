@interface _SDSVersionRangeChanges : NSObject {
    unsigned char _changeTypeMin;
    unsigned int _replacementMin;
    unsigned char _changeTypeMax;
    unsigned int _replacementMax;
}

- (void)omitMax;
- (void)omitMin;
- (void)preserveMax;
- (void)preserveMin;
- (void)replaceMax:(id)a0;
- (void)replaceMin:(id)a0;

@end
