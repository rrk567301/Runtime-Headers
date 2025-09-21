@class NSArray, NSString, _INPBString;

@interface _INPBActivity : PBCodable <_INPBActivity, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *activityDescriptors;
@property (readonly, nonatomic) unsigned long long activityDescriptorsCount;
@property (retain, nonatomic) _INPBString *activityType;
@property (readonly, nonatomic) char hasActivityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)activityDescriptorsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)activityDescriptorsAtIndex:(unsigned long long)a0;
- (void)addActivityDescriptors:(id)a0;
- (void)clearActivityDescriptors;

@end
