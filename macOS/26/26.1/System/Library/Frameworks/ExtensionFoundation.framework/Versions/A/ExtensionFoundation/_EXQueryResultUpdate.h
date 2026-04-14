@class NSSet, NSString;

@interface _EXQueryResultUpdate : _EXQueryResult {
    void /* function */ removedUUIDs;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSSet *removedUUIDs;
@property (nonatomic, readonly) NSSet *addedExtensions;
@property (nonatomic, readonly) NSString *description;

- (id)initWithAvailablility:(id)a0;
- (id)initWithCurrentExtensions:(id)a0 updatedExtensions:(id)a1;
- (id)initWithIdentities:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAddedExtensions:(id)a0 removedUUIDs:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
