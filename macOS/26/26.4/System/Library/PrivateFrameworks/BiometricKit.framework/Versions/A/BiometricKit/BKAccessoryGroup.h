@class NSString, BKDevice, NSUUID;

@interface BKAccessoryGroup : NSObject {
    unsigned int _type;
    NSUUID *_uuid;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BKDevice *device;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)accessoriesWithError:(id *)a0;
- (id)connectedAccessoriesWithError:(id *)a0;
- (id)initWithServerAccessoryGroup:(id)a0 device:(id)a1;
- (BOOL)isEqualToAccessoryGroup:(id)a0;
- (BOOL)isEqualToServerAccessoryGroup:(id)a0;
- (id)serverAccessoryGroup;

@end
