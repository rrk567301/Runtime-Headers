@interface _ATXTimeHistogram : NSObject <NSSecureCoding> {
    unsigned int _count;
    struct { double x0; unsigned int x1; unsigned short x2; } *_entries;
    unsigned short _bucketCount;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned short pointsPerTimeInterval;
@property (readonly, nonatomic) BOOL applyFilter;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerate:(id /* block */)a0;

@end
