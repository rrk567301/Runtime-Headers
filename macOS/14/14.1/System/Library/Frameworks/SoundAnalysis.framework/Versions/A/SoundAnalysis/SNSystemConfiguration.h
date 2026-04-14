@interface SNSystemConfiguration : NSObject {
    unsigned int _channelCount;
    double _sampleRate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
