@interface NFSingleUserSession : NFSession

- (id)checkUserBlessing:(id)a0 hasCards:(char *)a1;
- (id)setBlessedUser:(id)a0 keybagUUID:(id)a1 withAuthorization:(id)a2;
- (char)hasCard:(id *)a0;
- (id)setBlessedUser:(id)a0 withAuthorization:(id)a1;

@end
