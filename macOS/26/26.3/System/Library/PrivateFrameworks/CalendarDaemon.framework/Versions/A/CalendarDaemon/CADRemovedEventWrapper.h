@class NSArray;

@interface CADRemovedEventWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int rowID;
@property (readonly, nonatomic) NSArray *removedDates;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRowID:(int)a0 removedDates:(id)a1;

@end
