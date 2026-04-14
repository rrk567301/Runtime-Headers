@class PBCodable;

@interface FCRecordContentArchive : FCContentArchive {
    PBCodable *_record;
}

+ (BOOL)supportsSecureCoding;

- (id)manifest;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
