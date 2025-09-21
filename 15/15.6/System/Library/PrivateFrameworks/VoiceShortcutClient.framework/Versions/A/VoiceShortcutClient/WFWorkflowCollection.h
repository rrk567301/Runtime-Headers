@class NSString;

@interface WFWorkflowCollection : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, nonatomic, getter=isFolder) char folder;
@property (readonly, nonatomic, getter=isDeleted) char deleted;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 isFolder:(char)a1 name:(id)a2 glyphCharacter:(unsigned short)a3 isDeleted:(char)a4;

@end
