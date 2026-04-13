@class NSSet;

@interface _EXActiveQueryUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *addedExtensions;
@property (readonly) NSSet *removedUUIDs;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurrentExtensions:(id)a0 updatedExtensions:(id)a1;
- (id)initWithAddedExtensions:(id)a0 removedUUIDs:(id)a1;

@end
