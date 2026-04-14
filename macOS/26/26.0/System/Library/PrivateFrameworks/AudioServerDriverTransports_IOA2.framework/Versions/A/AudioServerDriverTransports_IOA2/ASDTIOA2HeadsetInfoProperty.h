@class ASDTIOA2Device;

@interface ASDTIOA2HeadsetInfoProperty : ASDCustomProperty {
    ASDTIOA2Device *_device;
}

- (id)value;
- (void).cxx_destruct;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int *)a2 andData:(void *)a3 forClient:(int)a4;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)a0 qualifierData:(const void *)a1 dataSize:(unsigned int)a2 andData:(const void *)a3 forClient:(int)a4;
- (BOOL)includeValueInDescription;
- (id)initWithIOA2Device:(id)a0;

@end
