@class NSSet;

@interface _EXQueryResultUpdate : _EXQueryResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *addedExtensions;
@property (readonly) NSSet *removedUUIDs;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)addedExtensions;
- (id)initWithAddedExtensions:(id)a0 removedUUIDs:(id)a1;
- (id)initWithCurrentExtensions:(id)a0 updatedExtensions:(id)a1;
- (id)initWithIdentities:(id)a0;

@end
