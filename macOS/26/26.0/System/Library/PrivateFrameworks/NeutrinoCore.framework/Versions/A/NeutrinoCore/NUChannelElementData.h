@class NSString, NUChannel;

@interface NUChannelElementData : NUChannelData

@property (readonly, copy, nonatomic) NSString *dataIdentifier;
@property (readonly, nonatomic) NUChannelElementData *parentData;
@property (readonly, nonatomic) NUChannel *channel;

- (id)value;
- (id)debugDescription;
- (id)description;
- (id)initWithFormat:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 format:(id)a1;
- (id)initWithParentData:(id)a0 channel:(id)a1;
- (id)subdataForChannel:(id)a0 error:(out id *)a1;

@end
