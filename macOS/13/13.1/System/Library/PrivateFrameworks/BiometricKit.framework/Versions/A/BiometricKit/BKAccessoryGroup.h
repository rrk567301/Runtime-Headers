@class NSString, BKDevice, NSUUID;

@interface BKAccessoryGroup : NSObject {
    unsigned int _type;
    NSUUID *_uuid;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BKDevice *device;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)accessoriesWithError:(id *)a0;
- (id)connectedAccessoriesWithError:(id *)a0;
- (id)initWithServerAccessoryGroup:(id)a0 device:(id)a1;
- (id)serverAccessoryGroup;
- (BOOL)isEqualToServerAccessoryGroup:(id)a0;
- (BOOL)isEqualToAccessoryGroup:(id)a0;

@end
