@class NSUUID;

@interface ULLabelHomeKitUserInteraction : ULLabel

@property (nonatomic) long long entityType;
@property (nonatomic) long long interactionType;
@property (retain, nonatomic) NSUUID *labelIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 timestamp:(id)a1 deviceClass:(unsigned long long)a2 entityType:(long long)a3 interactionType:(long long)a4 labelIdentifier:(id)a5;
- (id)copyUpdatingInteractionType:(long long)a0;
- (id)initWithName:(id)a0 deviceClass:(unsigned long long)a1 andEntityType:(long long)a2;
- (id)initWithName:(id)a0 entityType:(long long)a1 timestamp:(id)a2 deviceClass:(unsigned long long)a3 coordinate:(id)a4 probabilityVector:(id)a5 imageIdentifiersVector:(id)a6 interactionType:(long long)a7;
- (id)initWithName:(id)a0 entityType:(long long)a1 timestamp:(id)a2 deviceClass:(unsigned long long)a3 coordinate:(id)a4 probabilityVector:(id)a5 imageIdentifiersVector:(id)a6 interactionType:(long long)a7 labelIdentifier:(id)a8;
- (id)initWithName:(id)a0 timestamp:(id)a1 deviceClass:(unsigned long long)a2 entityType:(long long)a3;
- (id)initWithName:(id)a0 timestamp:(id)a1 deviceClass:(unsigned long long)a2 entityType:(long long)a3 interactionType:(long long)a4;

@end
