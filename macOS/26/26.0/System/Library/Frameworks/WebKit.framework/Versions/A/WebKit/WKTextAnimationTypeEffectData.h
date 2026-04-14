@class NSUUID;

@interface WKTextAnimationTypeEffectData : NSObject {
    struct RetainPtr<NSUUID> { NSUUID *m_ptr; } _effectID;
}

@property (readonly, nonatomic) NSUUID *effectID;
@property (readonly, nonatomic) unsigned char type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEffectID:(id)a0 type:(unsigned char)a1;

@end
