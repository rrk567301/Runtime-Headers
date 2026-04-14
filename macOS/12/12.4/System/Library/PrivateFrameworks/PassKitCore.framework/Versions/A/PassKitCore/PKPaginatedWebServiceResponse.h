@class NSArray, NSNumber;

@interface PKPaginatedWebServiceResponse : PKWebServiceResponse

@property (readonly, nonatomic) NSArray *rawDataList;
@property (readonly, nonatomic) NSNumber *pageOffset;
@property (readonly, nonatomic) NSNumber *totalPageCount;

+ (BOOL)supportsSecureCoding;
+ (id)responseWithData:(id)a0;

- (id)debugDescription;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
