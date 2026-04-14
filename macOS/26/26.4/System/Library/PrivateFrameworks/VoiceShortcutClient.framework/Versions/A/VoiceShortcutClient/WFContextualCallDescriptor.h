@class NSString, INPerson;
@protocol WFPropertyListObject;

@interface WFContextualCallDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) unsigned long long callType;
@property (readonly, nonatomic) id<WFPropertyListObject> callTypeSerializedRepresentation;
@property (readonly, nonatomic) INPerson *person;
@property (readonly, nonatomic) id<WFPropertyListObject> personSerializedRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0 callType:(unsigned long long)a1 person:(id)a2 callTypeSerializedRepresentation:(id)a3 personSerializedRepresentation:(id)a4;

@end
