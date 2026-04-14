@class NSPredicate, LSExtensionPointRecord;

@interface _EXRecordQuery : _EXQuery {
    NSPredicate *_predicate;
    struct { unsigned int val[8]; } _hostAuditToken;
}

@property (retain) LSExtensionPointRecord *record;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)platform;
- (id)predicate;
- (void)setPredicate:(id)a0;
- (id)extensionPointIdentifier;
- (BOOL)matchesRecord:(id)a0;
- (struct { unsigned int x0[8]; })hostAuditToken;
- (id)initWithExtensionPoint:(id)a0;
- (id)extensionPointRecords;
- (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;

@end
