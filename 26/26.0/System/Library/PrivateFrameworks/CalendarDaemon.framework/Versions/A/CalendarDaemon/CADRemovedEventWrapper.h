@class NSArray;

@interface CADRemovedEventWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int rowID;
@property (readonly, nonatomic) NSArray *removedDates;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRowID:(int)a0 removedDates:(id)a1;

@end
