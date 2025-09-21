@class NSString, INPerson, NSNumber, INDateComponentsRange;

@interface INFileProperty : NSObject <INFilePropertyExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *qualifier;
@property (readonly, copy) NSString *type;
@property (readonly, copy) INDateComponentsRange *dateComponentsRange;
@property (readonly, copy) INPerson *person;
@property (readonly, copy) NSString *value;
@property (readonly, copy) NSNumber *quantity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 qualifier:(id)a1 type:(id)a2 dateComponentsRange:(id)a3 person:(id)a4 value:(id)a5 quantity:(id)a6;

@end
