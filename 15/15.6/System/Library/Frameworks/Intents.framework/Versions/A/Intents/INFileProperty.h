@class NSString, INPerson, NSNumber, INDateComponentsRange;

@interface INFileProperty : NSObject <INFilePropertyExport, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithName:(id)a0 qualifier:(id)a1 type:(id)a2 dateComponentsRange:(id)a3 person:(id)a4 value:(id)a5 quantity:(id)a6;

@end
