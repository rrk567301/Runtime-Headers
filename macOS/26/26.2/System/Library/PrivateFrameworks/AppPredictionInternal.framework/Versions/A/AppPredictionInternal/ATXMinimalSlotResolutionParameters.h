@class NSUUID;

@interface ATXMinimalSlotResolutionParameters : NSObject <NSCopying> {
    unsigned long long _paramHash;
    NSUUID *_slotSetUuid;
}

@property (readonly, nonatomic) unsigned long long slotHash;
@property (readonly, nonatomic) unsigned long long paramCount;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParameterHash:(unsigned long long)a0 slotHash:(unsigned long long)a1 uuid:(id)a2 paramCount:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0 slots:(id)a1;
- (id)actionAndSlotSet;

@end
