@interface IMNicknameEncryptionRecordTag : IMNicknameEncryptionTag

+ (id)tagWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)tagWithStringRepresentation:(id)a0 error:(id *)a1;

- (char)isEqualToTag:(id)a0 error:(id *)a1;

@end
